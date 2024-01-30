@class NSURL, PSUIAppDescription;

@interface PSUIAppDescriptionStoreResponse : NSObject

@property (retain, nonatomic) PSUIAppDescription *partialAppDescription;
@property (retain, nonatomic) NSURL *iconURL;
@property (retain, nonatomic) NSURL *installURL;

- (void).cxx_destruct;

@end
