@interface MPSMatrixDescriptor : NSObject

@property (nonatomic) unsigned long long rows;
@property (nonatomic) unsigned long long columns;
@property (readonly, nonatomic) unsigned long long matrices;
@property (nonatomic) unsigned int dataType;
@property (nonatomic) unsigned long long rowBytes;
@property (readonly, nonatomic) unsigned long long matrixBytes;

+ (id)matrixDescriptorWithRows:(unsigned long long)a0 columns:(unsigned long long)a1 matrices:(unsigned long long)a2 rowBytes:(unsigned long long)a3 matrixBytes:(unsigned long long)a4 dataType:(unsigned int)a5;
+ (id)matrixDescriptorWithRows:(unsigned long long)a0 columns:(unsigned long long)a1 rowBytes:(unsigned long long)a2 dataType:(unsigned int)a3;
+ (unsigned long long)rowBytesForColumns:(unsigned long long)a0 dataType:(unsigned int)a1;
+ (id)matrixDescriptorWithDimensions:(unsigned long long)a0 columns:(unsigned long long)a1 rowBytes:(unsigned long long)a2 dataType:(unsigned int)a3;
+ (unsigned long long)rowBytesFromColumns:(unsigned long long)a0 dataType:(unsigned int)a1;

- (id)init;

@end
