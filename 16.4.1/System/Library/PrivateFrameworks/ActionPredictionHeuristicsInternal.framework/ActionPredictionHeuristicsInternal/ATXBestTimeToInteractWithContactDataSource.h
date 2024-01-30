@class ATXHeuristicDevice;

@interface ATXBestTimeToInteractWithContactDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (id)initWithDevice:(id)a0;
- (void)hourOfDayInteractionProbabilitiesWithContact:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;

@end
