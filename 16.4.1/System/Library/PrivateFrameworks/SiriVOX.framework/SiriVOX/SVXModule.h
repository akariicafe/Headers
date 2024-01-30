@class AFAnalytics, NSString, AFInstanceContext, AFPreferences;
@protocol SVXPerforming;

@interface SVXModule : NSObject

@property (nonatomic) BOOL isActive;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) Class instanceClass;
@property (readonly, nonatomic) AFInstanceContext *instanceContext;
@property (readonly, nonatomic) AFPreferences *preferences;
@property (readonly, nonatomic) AFAnalytics *analytics;
@property (readonly, nonatomic) id<SVXPerforming> performer;

- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 instanceClass:(Class)a1 instanceContext:(id)a2 preferences:(id)a3 analytics:(id)a4 performer:(id)a5;

@end
