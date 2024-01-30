@interface SGThreadParser : NSObject

+ (id)stripChevrons:(id)a0;
+ (id)emailFrom:(id)a0 entity:(id)a1;
+ (id)emailFrom:(id)a0;
+ (id)nextMessage:(id)a0 entity:(id)a1;
+ (id)nextMessage:(id)a0;
+ (void)enumeratePreviousMessages:(id)a0 inEntity:(id)a1 usingBlock:(id /* block */)a2;
+ (void)enumeratePreviousMessages:(id)a0 usingBlock:(id /* block */)a1;
+ (id)ipsosMessageWithSearchableItem:(id)a0;

@end
