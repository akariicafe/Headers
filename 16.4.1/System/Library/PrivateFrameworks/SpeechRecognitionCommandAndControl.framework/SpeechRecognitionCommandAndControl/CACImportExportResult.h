@class NSError, NSString;

@interface CACImportExportResult : NSObject

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;

- (void).cxx_destruct;
- (void)displayAlertForViewController:(id)a0;
- (id)initWithError:(id)a0 title:(id)a1 message:(id)a2;

@end
