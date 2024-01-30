@class NSString, NSMutableDictionary, CLLocation, NSNumber;

@interface SSLookupProperties : NSObject <NSCopying, SSXPCCoding> {
    NSMutableDictionary *_requestParameters;
}

@property (copy, nonatomic) NSString *keyProfile;
@property (nonatomic) long long localizationStyle;
@property (copy, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSNumber *timeoutInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)setValue:(id)a0 forRequestParameter:(id)a1;
- (id)valueForRequestParameter:(id)a0;
- (id)copyRequestParameters;

@end
