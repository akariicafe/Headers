@class NSMutableArray;

@interface TRIPBMessageOptions : TRIPBMessage

@property (nonatomic) BOOL messageSetWireFormat;
@property (nonatomic) BOOL hasMessageSetWireFormat;
@property (nonatomic) BOOL noStandardDescriptorAccessor;
@property (nonatomic) BOOL hasNoStandardDescriptorAccessor;
@property (nonatomic) BOOL deprecated;
@property (nonatomic) BOOL hasDeprecated;
@property (nonatomic) BOOL mapEntry;
@property (nonatomic) BOOL hasMapEntry;
@property (retain, nonatomic) NSMutableArray *uninterpretedOptionArray;
@property (readonly, nonatomic) unsigned long long uninterpretedOptionArray_Count;

+ (id)descriptor;

@end
