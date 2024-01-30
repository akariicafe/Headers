@class CPZone, CPBody;

@interface CPTextBoxMaker : NSObject {
    CPBody *bodyZone;
    CPZone *mainZone;
}

+ (void)boxLayoutsIn:(id)a0;
+ (void)promoteLayoutsIn:(id)a0;

- (void)rotate:(id)a0;
- (BOOL)layoutIsSliced:(id)a0;
- (void)promoteLayoutsInCertainRegions:(id)a0;
- (void)boxLayout:(id)a0;
- (void)boxLayoutsIn:(id)a0;
- (void)makeBoxesWith:(id)a0 parent:(id)a1;
- (void)promoteLayoutsIn:(id)a0;
- (void)rotateTextBox:(id)a0;

@end
