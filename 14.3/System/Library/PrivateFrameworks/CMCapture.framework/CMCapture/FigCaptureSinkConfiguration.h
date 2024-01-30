@class NSString;

@interface FigCaptureSinkConfiguration : NSObject <FigXPCCoding, NSCopying>

@property (copy, nonatomic) NSString *sinkID;
@property (readonly, nonatomic) int sinkType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stringForSinkType:(int)a0;

- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;

@end
