@class NSArray;

@interface MTLStitchedLibraryDescriptor : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *binaryArchives;
@property (nonatomic) unsigned long long options;
@property (copy, nonatomic) NSArray *functionGraphs;
@property (copy, nonatomic) NSArray *functions;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (void)dealloc;

@end
