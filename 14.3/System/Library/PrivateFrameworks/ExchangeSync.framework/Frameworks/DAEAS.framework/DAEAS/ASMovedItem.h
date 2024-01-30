@class NSString, NSNumber;

@interface ASMovedItem : ASItem {
    NSString *_srcMsgId;
    NSNumber *_status;
    NSString *_dstMsgId;
}

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (id)asParseRules;

- (void).cxx_destruct;
- (void)setStatus:(id)a0;
- (id)status;
- (id)srcMsgId;
- (id)dstMsgId;
- (void)setDstMsgId:(id)a0;
- (void)setSrcMsgId:(id)a0;

@end
