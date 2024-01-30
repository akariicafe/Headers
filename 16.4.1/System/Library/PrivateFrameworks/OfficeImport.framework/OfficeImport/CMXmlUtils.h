@interface CMXmlUtils : NSObject

+ (id)copyHeadElement;
+ (id)copyFilteredString:(id)a0;
+ (id)copyHeadElementForDeviceWidth:(int)a0;
+ (id)copyHeadElementWithTitle:(id)a0;
+ (id)copyHeadElementWithTitle:(id)a0 deviceWidth:(int)a1;
+ (id)copyXhtmlDocument;
+ (void)filterString:(id)a0;
+ (id)xhtmlStringWithXmlData:(id)a0;

@end
