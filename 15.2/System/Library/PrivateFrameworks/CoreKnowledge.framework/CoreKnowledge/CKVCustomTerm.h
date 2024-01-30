@class NSString;

@interface CKVCustomTerm : NSObject <CKVocabularyItem, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *itemId;
@property (readonly, nonatomic) unsigned short vocabularyType;
@property (readonly, nonatomic) NSString *term;
@property (readonly, nonatomic) NSString *vocabularyId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithItemId:(id)a0 vocabularyType:(unsigned short)a1 term:(id)a2;
- (id)initWithItemId:(id)a0 vocabularyType:(unsigned short)a1 term:(id)a2 vocabularyId:(id)a3;
- (BOOL)isEqualToCustomTerm:(id)a0;

@end
