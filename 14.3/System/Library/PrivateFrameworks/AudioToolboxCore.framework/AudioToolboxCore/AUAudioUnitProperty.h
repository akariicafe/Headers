@class NSString;

@interface AUAudioUnitProperty : NSObject <NSSecureCoding> {
    NSString *_key;
    unsigned int _v2propID;
    unsigned int _scope;
    unsigned int _element;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)propertyWithKey:(id)a0;
+ (id)propertyWithKey:(id)a0 scope:(unsigned int)a1 element:(unsigned int)a2;
+ (id)propertyWithKey:(id)a0 v2propID:(unsigned int)a1 scope:(unsigned int)a2 element:(unsigned int)a3;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)initWithKey:(id)a0;
- (id)initWithKey:(id)a0 scope:(unsigned int)a1 element:(unsigned int)a2;
- (id)initWithKey:(id)a0 v2propID:(unsigned int)a1 scope:(unsigned int)a2 element:(unsigned int)a3;
- (void)encodeWithCoder:(id)a0;

@end
