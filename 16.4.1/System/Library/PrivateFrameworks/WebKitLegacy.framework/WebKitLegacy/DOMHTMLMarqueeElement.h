@interface DOMHTMLMarqueeElement : DOMHTMLElement

- (id)width;
- (id)direction;
- (void)setDirection:(id)a0;
- (void)setWidth:(id)a0;
- (void)setBehavior:(id)a0;
- (void)setHeight:(id)a0;
- (id)height;
- (id)behavior;
- (void)stop;
- (void)start;
- (int)loop;
- (unsigned int)scrollAmount;
- (void)setScrollAmount:(unsigned int)a0;
- (id)bgColor;
- (void)setBgColor:(id)a0;
- (void)setScrollDelay:(unsigned int)a0;
- (unsigned int)hspace;
- (unsigned int)scrollDelay;
- (void)setHspace:(unsigned int)a0;
- (void)setLoop:(int)a0;
- (void)setTrueSpeed:(BOOL)a0;
- (void)setVspace:(unsigned int)a0;
- (BOOL)trueSpeed;
- (unsigned int)vspace;

@end
