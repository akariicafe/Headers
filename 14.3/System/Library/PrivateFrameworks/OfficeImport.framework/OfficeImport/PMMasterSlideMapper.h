@class PDSlideBase;

@interface PMMasterSlideMapper : CMMapper {
    PDSlideBase *_slide;
}

- (void).cxx_destruct;
- (id)initWithPDSlide:(id)a0 parent:(id)a1;
- (void)mapMasterGraphicsAt:(id)a0 withState:(id)a1;

@end
