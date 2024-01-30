@class NSSet;

@interface MXMUtilizationSampleTag : MXMSampleTag

@property (class, readonly, copy, nonatomic, getter=ancestery) NSSet *allUtilization;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *CPU;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *CPUInstructions;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *CPUCycles;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *CPUTime;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *CPUTimeUser;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *CPUTimeSystem;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *CPUQos;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *CPUQosDefault;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *CPUQosMaintenance;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *CPUQosBackground;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *CPUQosUtility;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *CPUQosLegacy;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *CPUQosUserInitiated;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *CPUQosUserInteractive;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *CPUTicks;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *CPUTicksIdle;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *CPUTicksUser;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *CPUTicksSystem;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *CPUTicksNice;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *CPULoad;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *CPULoadTask;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *CPULoadThread;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *memory;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *memoryPhysical;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *memoryPeakPhysicalLifetime;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *memoryPeakPhysicalInterval;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *memoryWired;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *memoryResident;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *memoryDirtied;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *memorySwapped;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *memoryVirtual;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *memoryLeak;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *IO;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *IOReads;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *IOWrites;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *IOLogicalWrites;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *machPort;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *network;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *networkSentBytes;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *networkSentPackets;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *networkRecievedBytes;
@property (class, readonly, copy, nonatomic) MXMUtilizationSampleTag *networkRecievedPackets;


@end
