@class NSString, HCHuffmanCoder, NSUUID, NSNumber;

@interface TIDPWordRecord : NSObject

@property (retain, nonatomic) NSNumber *wordPosition;
@property (copy, nonatomic) NSString *word;
@property (readonly, nonatomic) NSString *cleanedWord;
@property (readonly, nonatomic) NSNumber *codedWord;
@property (readonly, nonatomic) NSString *codedWordAsString;
@property (retain, nonatomic) HCHuffmanCoder *coder;
@property (readonly, nonatomic) NSUUID *coderVersion;

+ (id)word:(id)a0 atPosition:(id)a1;
+ (id)word:(id)a0;
+ (id)word:(id)a0 atPosition:(id)a1 coder:(id)a2;

- (void).cxx_destruct;
- (id)toDPWordRecord;

@end
