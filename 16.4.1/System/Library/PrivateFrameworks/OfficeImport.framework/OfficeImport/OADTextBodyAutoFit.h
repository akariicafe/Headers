@interface OADTextBodyAutoFit : NSObject {
    unsigned char mType;
}

- (unsigned char)type;
- (id)initWithType:(unsigned char)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;

@end
