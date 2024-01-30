@class NSArray, NSMutableDictionary, NSData, NSNumber;

@interface SSVGratisRequestBody : NSObject <NSCopying> {
    NSMutableDictionary *_additionalParameters;
}

@property (readonly, nonatomic) long long requestStyle;
@property (copy, nonatomic) NSNumber *accountIdentifier;
@property (copy, nonatomic) NSArray *applications;
@property (nonatomic, getter=isBackgroundRequest) BOOL backgroundRequest;
@property (copy, nonatomic) NSArray *bundleIdentifiers;
@property (copy, nonatomic) NSArray *itemIdentifiers;
@property (readonly, nonatomic) NSMutableDictionary *bodyDictionary;
@property (readonly, nonatomic) NSData *JSONBodyData;
@property (readonly, nonatomic) NSData *propertyListBodyData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithRequestStyle:(long long)a0;
- (void)setValue:(id)a0 forBodyParameter:(id)a1;

@end
