@class NSString;

@interface MTLFunctionStitchingInputNode : NSObject <MTLFunctionStitchingNode>

@property (nonatomic) unsigned long long argumentIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (id)initWithArgumentIndex:(unsigned long long)a0;

@end
