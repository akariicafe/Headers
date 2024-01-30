@class NSString;

@interface TLKSelectableGridTuple : TLKObject

@property (nonatomic) double size;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;

+ (id)tupleWithTitle:(id)a0 subtitle:(id)a1;
+ (id)tuplesForTitles:(id)a0 subtitles:(id)a1;

- (void).cxx_destruct;
- (id)description;

@end
