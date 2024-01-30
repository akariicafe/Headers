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

- (id)status;
- (void)setStatus:(id)a0;
- (void).cxx_destruct;
- (id)srcMsgId;
- (id)dstMsgId;
- (void)setDstMsgId:(id)a0;
- (void)setSrcMsgId:(id)a0;

@end
