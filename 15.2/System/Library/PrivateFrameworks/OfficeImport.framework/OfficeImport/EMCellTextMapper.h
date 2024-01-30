@class EDString, EDStyle;

@interface EMCellTextMapper : CMMapper {
    EDString *edString;
    EDStyle *edStyle;
}

+ (double)contentWidthForString:(id)a0 style:(id)a1;

- (double)contentWidth;
- (void).cxx_destruct;
- (id)initWithEDString:(id)a0 style:(id)a1 parent:(id)a2;
- (void)mapAt:(id)a0 withState:(id)a1 columnWidth:(double)a2 height:(double)a3 spreadLeft:(BOOL)a4;
- (void)mapVerticalTextAt:(id)a0 withState:(id)a1 width:(double)a2 height:(double)a3;
- (void)mapTextRunsAt:(id)a0;

@end
