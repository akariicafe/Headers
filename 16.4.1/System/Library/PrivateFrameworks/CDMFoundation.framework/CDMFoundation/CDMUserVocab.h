@class NSString, NSArray;

@interface CDMUserVocab : NSObject {
    unsigned int _userVocabOptions;
}

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSArray *labels;

+ (id)labelSet;
+ (id)_labelOptionMap;
+ (id)_optionLabelMap;

- (void).cxx_destruct;
- (void)addLabel:(id)a0;
- (id)initWithText:(id)a0 label:(id)a1;
- (id)initWithText:(id)a0 optionsFlag:(unsigned int)a1;
- (unsigned int)userVocabOptions;

@end
