@class TICandidateRequestToken, TIAutocorrectionList;

@interface TITypologyStatisticCurrentAutocorrections : TITypologyStatistic

@property (retain, nonatomic) TIAutocorrectionList *autocorrections;
@property (retain, nonatomic) TICandidateRequestToken *requestToken;

- (void)visitRecordAutocorrections:(id)a0;
- (void).cxx_destruct;

@end
