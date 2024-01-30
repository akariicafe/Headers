@class NSString, NSMutableArray, NSData;

@interface TRIPBUninterpretedOption : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *nameArray;
@property (readonly, nonatomic) unsigned long long nameArray_Count;
@property (copy, nonatomic) NSString *identifierValue;
@property (nonatomic) BOOL hasIdentifierValue;
@property (nonatomic) unsigned long long positiveIntValue;
@property (nonatomic) BOOL hasPositiveIntValue;
@property (nonatomic) long long negativeIntValue;
@property (nonatomic) BOOL hasNegativeIntValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (copy, nonatomic) NSData *stringValue;
@property (nonatomic) BOOL hasStringValue;
@property (copy, nonatomic) NSString *aggregateValue;
@property (nonatomic) BOOL hasAggregateValue;

+ (id)descriptor;

@end
