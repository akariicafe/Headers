@class NSString, ATXComplication, CHSWidget;

@interface PRComplicationDescriptor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (retain, nonatomic) CHSWidget *widget;
@property (retain, nonatomic) ATXComplication *suggestedComplication;
@property (readonly, nonatomic) BOOL hasMatchingDescriptor;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)widgetDescriptor;
- (void).cxx_destruct;
- (id)PRSWidget;
- (id)initWithPRSWidget:(id)a0;
- (id)initWithUniqueIdentifier:(id)a0 widget:(id)a1 suggestedComplication:(id)a2;
- (id)layoutElement;

@end
