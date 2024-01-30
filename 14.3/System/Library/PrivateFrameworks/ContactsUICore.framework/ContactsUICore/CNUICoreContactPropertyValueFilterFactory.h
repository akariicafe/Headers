@protocol CNUICoreContactPropertyValueFilter;

@interface CNUICoreContactPropertyValueFilterFactory : NSObject

@property (class, readonly, nonatomic) id<CNUICoreContactPropertyValueFilter> nicknameFilter;
@property (class, readonly, nonatomic) id<CNUICoreContactPropertyValueFilter> photoFilter;
@property (class, readonly, nonatomic) id<CNUICoreContactPropertyValueFilter> noteFilter;
@property (class, readonly, nonatomic) id<CNUICoreContactPropertyValueFilter> relationshipsFilter;

+ (id)aggregatePropertyValueFilterWithValueFilters:(id)a0;

@end
