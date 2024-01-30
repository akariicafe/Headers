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

- (BOOL)floating;
- (void)clearAnchor;
- (BOOL)hasBounds;
- (BOOL)hasText;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isLinked;
- (BOOL)isShape;
- (id)textBox;
- (id)createAnchor;
- (id)createTextBoxWithDocument:(id)a0 textType:(int)a1;
- (BOOL)isLine;
- (BOOL)isTopLevelObject;
- (unsigned long long)linkedTextBoxSupport;
- (void)setTextBox:(id)a0 document:(id)a1;
- (void)setTextType:(int)a0;
- (int)textType;

@end
