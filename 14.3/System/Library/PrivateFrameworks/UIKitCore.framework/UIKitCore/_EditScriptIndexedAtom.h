@class NSString;

@interface _EditScriptIndexedAtom : NSObject

@property (nonatomic) long long editOperation;
@property (nonatomic) unsigned long long indexToEdit;
@property (nonatomic) unsigned long long indexInArrayB;
@property (retain, nonatomic) NSString *replacementText;

+ (id)atomWithEditOperation:(long long)a0 indexToEdit:(unsigned long long)a1 newText:(id)a2 indexInArrayB:(unsigned long long)a3;

- (void).cxx_destruct;
- (id)description;
- (id)initWithEditOperation:(long long)a0 indexToEdit:(unsigned long long)a1 newText:(id)a2 indexInArrayB:(unsigned long long)a3;

@end
