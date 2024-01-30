@class NSNumber, NSString;

@interface AMDModelInputMetadata : NSObject <PostRemapOperation>

@property long long dataType;
@property (retain, nonatomic) NSNumber *size;
@property (retain, nonatomic) NSNumber *paddingValue;
@property (retain, nonatomic) NSString *postRemapOperation;
@property (retain, nonatomic) NSNumber *hashOpModValue;
@property (retain, nonatomic) NSNumber *truncateOpMinValue;
@property (retain, nonatomic) NSNumber *truncateOpMaxValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)getDataTypeFromString:(id)a0;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)getSize;
- (BOOL)isValid;
- (id)getPostRemapOperationName;
- (id)getHashOpModValue;
- (id)getTruncateOpMinValue;
- (id)getTruncateOpMaxValue;
- (long long)getDataType;
- (id)getPaddingValue;

@end
