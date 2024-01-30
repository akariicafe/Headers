@class NSString, NSMutableDictionary;

@interface SKUIReview : NSObject <SKUICacheCoding>

@property (readonly, nonatomic) NSString *body;
@property (readonly, nonatomic) NSString *dateString;
@property (readonly, nonatomic) float rating;
@property (readonly, nonatomic) NSString *reviewer;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSMutableDictionary *cacheRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
