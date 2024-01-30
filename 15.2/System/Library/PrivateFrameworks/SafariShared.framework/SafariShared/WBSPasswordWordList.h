@class NSString;

@interface WBSPasswordWordList : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)enumerateEntriesForString:(id)a0 withBlock:(id /* block */)a1;
- (id)entriesForString:(id)a0;

@end
