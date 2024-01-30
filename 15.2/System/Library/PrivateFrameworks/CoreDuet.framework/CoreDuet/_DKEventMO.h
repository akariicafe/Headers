@class NSString, NSSet, _DKStructuredMetadataMO, _DKObjectMO;

@interface _DKEventMO : _DKObjectMO

@property (nonatomic) double endDate;
@property (nonatomic) short endDayOfWeek;
@property (nonatomic) int endSecondOfDay;
@property (nonatomic) double startDate;
@property (nonatomic) short startDayOfWeek;
@property (nonatomic) int startSecondOfDay;
@property (retain, nonatomic) NSString *streamName;
@property (nonatomic) double valueDouble;
@property (nonatomic) long long valueInteger;
@property (retain, nonatomic) NSString *valueString;
@property (nonatomic) short valueClass;
@property (nonatomic) long long valueTypeCode;
@property (nonatomic) long long secondsFromGMT;
@property (nonatomic) double confidence;
@property (retain, nonatomic) _DKObjectMO *value;
@property (nonatomic) BOOL shouldSync;
@property (nonatomic) long long compatibilityVersion;
@property (nonatomic) BOOL hasCustomMetadata;
@property (retain, nonatomic) NSSet *customMetadata;
@property (nonatomic) BOOL hasStructuredMetadata;
@property (retain, nonatomic) _DKStructuredMetadataMO *structuredMetadata;

@end
