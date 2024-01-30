@class NSString;

@interface UISheetPresentationControllerDetent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long _type;
@property (readonly, nonatomic) id /* block */ _internalBlock;
@property (readonly, nonatomic) double _constant;
@property (readonly, nonatomic) BOOL _createdWithDeprecatedInitializer;
@property (readonly, nonatomic) NSString *_identifier;

+ (id)_detentWithContainerViewBlock:(id /* block */)a0;
+ (id)mediumDetent;
+ (id)largeDetent;
+ (id)_detentWithResolutionContextBlock:(id /* block */)a0;
+ (id)_detentWithIdentifier:(id)a0 constant:(double)a1;
+ (id)_detentWithIdentifier:(id)a0 containerViewBlock:(id /* block */)a1;
+ (id)_detentWithIdentifier:(id)a0 resolutionContextBlock:(id /* block */)a1;

- (void)_setIdentifier:(id)a0;
- (double)_valueInContainerView:(id)a0 resolutionContext:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithType:(long long)a0 identifier:(id)a1 internalBlock:(id /* block */)a2 constant:(double)a3;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
