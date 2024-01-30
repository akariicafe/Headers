@class NSString;

@interface WBSPasswordWordListEntry : NSObject

@property (readonly, copy, nonatomic) NSString *word;
@property (readonly, nonatomic, getter=isSensitive) BOOL sensitive;
@property (readonly, copy, nonatomic) NSString *wordListIdentifier;
@property (readonly, nonatomic) unsigned long long guessesRequired;

- (id)description;
- (void).cxx_destruct;
- (id)initWithWord:(id)a0 isSensitive:(BOOL)a1 wordListIdentifier:(id)a2 guessesRequired:(unsigned long long)a3;

@end
