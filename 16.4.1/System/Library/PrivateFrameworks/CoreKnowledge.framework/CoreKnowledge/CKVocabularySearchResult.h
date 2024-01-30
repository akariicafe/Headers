@class NSString, NSObject;
@protocol CKVocabularyItem;

@interface CKVocabularySearchResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSObject<CKVocabularyItem> *vocabularyItem;
@property (readonly, nonatomic) NSString *originAppId;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithVocabularyItem:(id)a0 originAppId:(id)a1;
- (BOOL)isEqualToSearchResult:(id)a0;

@end
