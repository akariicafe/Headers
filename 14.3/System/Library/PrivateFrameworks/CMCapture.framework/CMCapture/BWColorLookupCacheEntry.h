@class NSData;

@interface BWColorLookupCacheEntry : NSObject

@property (readonly, retain, nonatomic) NSData *foregroundColorLookupTable;
@property (readonly, retain, nonatomic) NSData *backgroundColorLookupTable;

- (void)dealloc;
- (id)initWithForegroundColorLookupTable:(id)a0 backgroundColorLookupTable:(id)a1;

@end
