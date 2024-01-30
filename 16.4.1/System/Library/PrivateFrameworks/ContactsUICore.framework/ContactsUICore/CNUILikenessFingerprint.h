@protocol _CNUILikenessFingerprintImpl;

@interface CNUILikenessFingerprint : NSObject <NSCopying> {
    id<_CNUILikenessFingerprintImpl> _impl;
}

+ (id)fingerprintForData:(id)a0;
+ (id)fingerprintForContactIdentifier:(id)a0;
+ (id)publicFingerprintForContact:(id)a0;
+ (id)fingerprintForContacts:(id)a0 scope:(id)a1;
+ (id)fingerprintForScope:(id)a0;
+ (id)implForContact:(id)a0;
+ (id)publicFingerprintForContacts:(id)a0 scope:(id)a1;
+ (id)fingerprintForContact:(id)a0;

- (id)initWithContact:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithImpl:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)hasContactIdentifier:(id)a0;
- (id)initWithContacts:(id)a0 badges:(id)a1 scope:(id)a2;

@end
