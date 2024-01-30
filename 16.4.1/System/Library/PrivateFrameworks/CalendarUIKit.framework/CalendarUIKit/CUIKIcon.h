@class NSDateComponents, NSCalendar;
@protocol CUIKIconGenerator;

@interface CUIKIcon : ISIcon

@property (readonly, copy, nonatomic) NSDateComponents *dateComponents;
@property (readonly, copy, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) long long format;
@property (readonly, nonatomic) id<CUIKIconGenerator> iconGenerator;

- (id)imageForImageDescriptor:(id)a0;
- (id)initWithDate:(id)a0 calendar:(id)a1 format:(long long)a2;
- (void)getCGImageForImageDescriptor:(id)a0 completion:(id /* block */)a1;
- (void)prepareImagesForImageDescriptors:(id)a0;
- (struct CGImage { } *)CGImageForImageDescriptor:(id)a0;
- (id)initWithDateComponents:(id)a0 calendar:(id)a1 format:(long long)a2 forceNoTextEffects:(BOOL)a3;
- (void)getImageForImageDescriptor:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
