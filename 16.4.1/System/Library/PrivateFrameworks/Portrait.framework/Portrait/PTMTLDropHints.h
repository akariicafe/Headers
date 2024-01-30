@class NSString;
@protocol MTLResourceGroupSPI;

@interface PTMTLDropHints : NSObject {
    id<MTLResourceGroupSPI> _resourceGroup;
    NSString *_name;
    int _count;
}

@property BOOL enabled;

- (void).cxx_destruct;
- (void)dropHintsFor:(id)a0;
- (id)initWithDevice:(id)a0 resources:(id)a1 name:(id)a2;
- (void)setDropHintsFor:(id)a0;

@end
