@class NSString;

@interface DocumentUnderstanding.DUDocumentCategory : NSObject

@property (class, nonatomic, readonly) NSString *ticket;
@property (class, nonatomic, readonly) NSString *receipt;
@property (class, nonatomic, readonly) NSString *taxForm;
@property (class, nonatomic, readonly) NSString *form;
@property (class, nonatomic, readonly) NSString *identification;
@property (class, nonatomic, readonly) NSString *book;
@property (class, nonatomic, readonly) NSString *worksheet;
@property (class, nonatomic, readonly) NSString *recipe;
@property (class, nonatomic, readonly) NSString *medical;
@property (class, nonatomic, readonly) NSString *presentation;

- (id)init;
- (void).cxx_destruct;

@end
