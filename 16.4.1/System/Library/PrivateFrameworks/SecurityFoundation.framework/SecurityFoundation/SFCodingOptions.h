@class NSString;

@interface SFCodingOptions : NSObject <NSCopying> {
    id _codingOptionsInternal;
}

@property (nonatomic) long long encoding;
@property (copy, nonatomic) NSString *encryptionPassphrase;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
