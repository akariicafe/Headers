@interface DOMHTMLMarqueeElement : DOMHTMLElement

- (id)behavior;
- (id)width;
- (void)setBehavior:(id)a0;
- (void)setDirection:(id)a0;
- (int)loop;
- (id)direction;
- (void)setHeight:(id)a0;
- (void)stop;
- (unsigned int)hspace;
- (unsigned int)vspace;
- (void)setScrollAmount:(unsigned int)a0;
- (unsigned int)scrollAmount;
- (id)bgColor;
- (id)height;
- (void)setWidth:(id)a0;
- (void)start;
- (void)setBgColor:(id)a0;
- (void)setLoop:(int)a0;
- (void)setHspace:(unsigned int)a0;
- (void)setVspace:(unsigned int)a0;
- (unsigned int)scrollDelay;
- (void)setScrollDelay:(unsigned int)a0;
- (BOOL)trueSpeed;
- (void)setTrueSpeed:(BOOL)a0;

@end
