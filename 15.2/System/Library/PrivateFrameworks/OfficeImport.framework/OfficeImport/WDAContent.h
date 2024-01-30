@class NSString, WDATextBox, WDAAnchor, OADDrawable;

@interface WDAContent : NSObject <OADClient, OADTextClient, OADLinkedTextClient> {
    WDATextBox *mTextBox;
    int mTextType;
}

@property (readonly, nonatomic) WDAAnchor *anchor;
@property (weak) OADDrawable *drawable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)classForType:(unsigned short)a0;

- (BOOL)hasBounds;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)floating;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (BOOL)hasText;
- (BOOL)isLinked;
- (void).cxx_destruct;
- (id)init;
- (void)clearAnchor;
- (BOOL)isLine;
- (id)textBox;
- (BOOL)isShape;
- (int)textType;
- (unsigned long long)linkedTextBoxSupport;
- (id)createAnchor;
- (id)createTextBoxWithDocument:(id)a0 textType:(int)a1;
- (void)setTextBox:(id)a0 document:(id)a1;
- (BOOL)isTopLevelObject;
- (void)setTextType:(int)a0;

@end
