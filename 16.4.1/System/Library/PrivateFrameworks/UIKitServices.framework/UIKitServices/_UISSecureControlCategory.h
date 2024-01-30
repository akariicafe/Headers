@class NSString;

@interface _UISSecureControlCategory : NSObject <NSCopying, NSSecureCoding> {
    union { unsigned short all; struct { unsigned char type : 6; unsigned char iconIndex : 5; unsigned char labelIndex : 5; } ; } _fields;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned int secureName;
@property (readonly, nonatomic) unsigned int secureNameForDrawing;
@property (readonly, nonatomic) NSString *iconGlyph;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithType:(unsigned long long)a0 iconIndex:(unsigned long long)a1 labelIndex:(unsigned long long)a2;
- (unsigned long long)authenticationMessageContextForStyle:(id)a0;

@end
