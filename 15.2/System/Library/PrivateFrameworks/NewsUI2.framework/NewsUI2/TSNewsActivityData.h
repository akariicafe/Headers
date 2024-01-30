@class NSString, NSArray;

@interface TSNewsActivityData : NSObject {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ traits;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ activity;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ object;
@property (nonatomic, readonly) NSArray *traits;

+ (long long)convertToArticleTraitWithTrait:(long long)a0;

- (void).cxx_destruct;
- (id)init;
- (id)initWithActivity:(long long)a0 identifier:(id)a1 object:(id)a2 traits:(id)a3;
- (id)initWithActivity:(long long)a0 identifier:(id)a1;
- (id)initWithActivity:(long long)a0 identifier:(id)a1 object:(id)a2;

@end
