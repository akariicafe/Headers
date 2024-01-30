@class NSString, NSDictionary;

@interface BCMResource : NSObject <BFMResource> {
    void /* unknown type, empty encoding */ data;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ $__lazy_storage_$_relationships;
    void /* unknown type, empty encoding */ $__lazy_storage_$_views;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) NSString *socialHighlightID;
@property (nonatomic, readonly) NSString *href;
@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, copy) NSDictionary *relationships;
@property (nonatomic, copy) NSDictionary *views;
@property (nonatomic, readonly) NSDictionary *meta;

- (id)init;
- (void).cxx_destruct;

@end
