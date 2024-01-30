@class NSString;

@interface SFCodingOptions : NSObject <NSCopying> {
    id _codingOptionsInternal;
}

@property (nonatomic) long long encoding;
@property (copy, nonatomic) NSString *encryptionPassphrase;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
