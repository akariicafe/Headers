@class NUSource, NSString;

@interface NUJSSource : NUJSProxy <NUJSSourceExport>

@property (readonly, nonatomic) NUSource *source;
@property (readonly) NSString *mediaType;

- (id)toString;
- (id)initWithRepresentedObject:(id)a0 context:(id)a1;
- (id)initWithSource:(id)a0 context:(id)a1;

@end
