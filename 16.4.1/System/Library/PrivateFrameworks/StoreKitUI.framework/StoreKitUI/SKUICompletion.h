@class NSString, NSMutableDictionary;

@interface SKUICompletion : NSObject <SKUICacheCoding>

@property (readonly, nonatomic) NSString *alternateTitle;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *URLString;
@property (readonly, nonatomic) NSMutableDictionary *cacheRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCacheRepresentation:(id)a0;
- (id)initWithCompletionDictionary:(id)a0;

@end
