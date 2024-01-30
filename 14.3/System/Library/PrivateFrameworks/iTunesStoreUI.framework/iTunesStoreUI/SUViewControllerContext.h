@class NSString, NSMutableDictionary;

@interface SUViewControllerContext : NSObject <NSSecureCoding> {
    NSMutableDictionary *_metadata;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *sectionIdentifier;
@property (nonatomic) long long type;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)setValue:(id)a0 forMetadataKey:(id)a1;
- (id)valueForMetadataKey:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyViewController;
- (long long)_typeForTypeString:(id)a0;
- (id)_typeStringForType:(long long)a0;

@end
