@class NSString, NSURL, NSData;

@interface MIContainerToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *personaUniqueString;
@property (readonly, nonatomic) BOOL isTransient;
@property (readonly, nonatomic) unsigned long long containerClass;
@property (readonly, nonatomic) NSURL *containerURL;
@property (readonly, nonatomic) NSData *serializedContainerRepresentation;

- (id)initWithContainer:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
